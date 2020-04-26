#pragma once

#include <cstddef>
#include <vector>
#include <utility>
#include <unordered_map>
#include <string>
#include <fstream>
#include "memory.h"

#include "model.pb.h"

namespace lh{

    using shape = std::vector<std::size_t>;

    enum dtype {float32, quint8, qint8, qint32};

    struct qparam{
        qparam():scale(1.0f), zero_point(0.0f) {}; // defalut value
        qparam(float scale_, float zero_point_):scale(scale_), zero_point(zero_point_){}; // provide value
        float scale;
        float zero_point;
    };

    class tensor{

        union udata_ptr{
            float* float_ptr;
            int8_t* int8_ptr;
            uint8_t* uint8_ptr;
            int32_t* int32_ptr;
        };
        union udata{
            float dfloat;
            int8_t dint8;
            uint8_t duint8;
            int32_t dint32;
        };
        public:
            tensor(void* raw_data, qparam qp, dtype type, shape tensor_shape){
                qp_ = qp;
                type_ = type;
                sizes = tensor_shape;
                int capacity = 1;
                for(auto& size:sizes) capacity *= size;
                switch(type_){
                    case float32:{ 
                        raw_data_.float_ptr = new float[capacity]; 
                        memcpy(raw_data_.float_ptr, static_cast<float*>(raw_data), sizeof(float)*capacity);
                    }
                    case quint8:{ 
                        raw_data_.uint8_ptr = new uint8_t[capacity]; 
                        memcpy(raw_data_.uint8_ptr, static_cast<uint8_t*>(raw_data), sizeof(uint8_t)*capacity);
                    }
                    case qint8:{
                        raw_data_.int8_ptr = new int8_t[capacity]; 
                        memcpy(raw_data_.int8_ptr, static_cast<int8_t*>(raw_data), sizeof(int8_t)*capacity);
                    }
                    case qint32:{
                        raw_data_.int32_ptr = new int32_t[capacity];
                        memcpy(raw_data_.int32_ptr, static_cast<int32_t*>(raw_data), sizeof(int32_t)*capacity);
                    }
                }

            };

            // only provide pointer, for float tensor
            tensor(void* raw_data, shape tensor_shape){
                qparam qp;
                qp_ = qp;
                type_ = float32;
                sizes = tensor_shape;
                int capacity = 1;
                for(auto& size:sizes) capacity *= size;
                switch(type_){
                    case float32:{ 
                        raw_data_.float_ptr = new float[capacity]; 
                        memcpy(raw_data_.float_ptr, static_cast<float*>(raw_data), sizeof(float)*capacity);
                    }
                    case quint8:{ 
                        raw_data_.uint8_ptr = new uint8_t[capacity]; 
                        memcpy(raw_data_.uint8_ptr, static_cast<uint8_t*>(raw_data), sizeof(uint8_t)*capacity);
                    }
                    case qint8:{
                        raw_data_.int8_ptr = new int8_t[capacity]; 
                        memcpy(raw_data_.int8_ptr, static_cast<int8_t*>(raw_data), sizeof(int8_t)*capacity);
                    }
                    case qint32:{
                        raw_data_.int32_ptr = new int32_t[capacity];
                        memcpy(raw_data_.int32_ptr, static_cast<int32_t*>(raw_data), sizeof(int32_t)*capacity);
                    }
                }
            };
            ~tensor(){
                switch(type_){
                    case float32: delete [] raw_data_.float_ptr;
                    case quint8: delete [] raw_data_.uint8_ptr;
                    case qint8: delete [] raw_data_.int8_ptr;
                    case qint32: delete [] raw_data_.int32_ptr;
                }
            };
            udata operator [](std::size_t index){
                udata value;
                switch(type_){
                    case float32: value.dfloat = raw_data_.float_ptr[index];
                    case quint8: value.duint8 = raw_data_.uint8_ptr[index];
                    case qint8: value.dint8 = raw_data_.int8_ptr[index];
                    case qint32: value.dint32 = raw_data_.int32_ptr[index];
                }
                return value;
            };
            udata_ptr raw_data_;
            qparam qp_;
            dtype type_;
            shape sizes;
            
    };

    using Graph = std::unordered_map<std::string, tensor*>;

    void buildgraphfrompb(std::string pb_path, Graph& graph);
}