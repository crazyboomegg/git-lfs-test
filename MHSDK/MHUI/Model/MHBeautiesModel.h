//
//  MHBeautiesModel.h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, MHBeautyMenuType){
    MHBeautyMenuType_Menu = 0,//菜单
    MHBeautyMenuType_Beauty = 1,//美颜
    MHBeautyMenuType_Face = 2,//美型
    MHBeautyMenuType_QuickBeauty = 3,//一键美型
    MHBeautyMenuType_Filter,//滤镜
    MHBeautyMenuType_Specify,//特效
    MHBeautyMenuType_Magnify,//哈哈镜
    MHBeautyMenuType_Watermark,//水印
    MHBeautyMenuType_Action,//动作识别
    MHBeautyMenuType_MakeUp,///<美妆

};
@interface MHBeautiesModel : NSObject
@property (nonatomic, copy) NSString *imgName;
@property (nonatomic, copy) NSString *beautyTitle;
@property (nonatomic, assign) MHBeautyMenuType menuType;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, copy) NSString *originalValue;//美颜美型默认值
@property (nonatomic, assign) NSInteger type;//类型
@property (nonatomic, assign) NSInteger aliment;//水印位置

//以下是一键美颜用
@property (nonatomic, copy) NSString *whiteValue;
@property (nonatomic, copy) NSString *buffingValue;
@property (nonatomic, copy) NSString *ruddinessValue;
@property (nonatomic, copy) NSString *bigEye_defaultValue;
@property (nonatomic, copy) NSString *bigEye_minValue;
@property (nonatomic, copy) NSString *bigEye_maxValue;
@property (nonatomic, copy) NSString *eyeBrown_defaultValue;
@property (nonatomic, copy) NSString *eyeBrown_minValue;
@property (nonatomic, copy) NSString *eyeBrown_maxValue;
@property (nonatomic, copy) NSString *eyeDistance_defaultValue;
@property (nonatomic, copy) NSString *eyeDistance_minValue;
@property (nonatomic, copy) NSString *eyeDistance_maxValue;
@property (nonatomic, copy) NSString *eyeAngle_defaultValue;
@property (nonatomic, copy) NSString *eyeAngle_minValue;
@property (nonatomic, copy) NSString *eyeAngle_maxValue;
@property (nonatomic, copy) NSString *face_defaultValue;
@property (nonatomic, copy) NSString *face_minValue;
@property (nonatomic, copy) NSString *face_maxValue;
@property (nonatomic, copy) NSString *mouth_defaultValue;
@property (nonatomic, copy) NSString *mouth_minValue;
@property (nonatomic, copy) NSString *mouth_maxValue;
@property (nonatomic, copy) NSString *nose_defaultValue;
@property (nonatomic, copy) NSString *nose_minValue;
@property (nonatomic, copy) NSString *nose_maxValue;
@property (nonatomic, copy) NSString *chin_defaultValue;
@property (nonatomic, copy) NSString *chin_minValue;
@property (nonatomic, copy) NSString *chin_maxValue;
@property (nonatomic, copy) NSString *forehead_defaultValue;
@property (nonatomic, copy) NSString *forehead_minValue;
@property (nonatomic, copy) NSString *forehead_maxValue;
@property (nonatomic, copy) NSString *longnose_defaultValue;
@property (nonatomic, copy) NSString *longnose_minValue;
@property (nonatomic, copy) NSString *longnose_maxValue;
@property (nonatomic, copy) NSString *shaveFace_defaultValue;
@property (nonatomic, copy) NSString *shaveFace_minValue;
@property (nonatomic, copy) NSString *shaveFace_maxValue;
@property (nonatomic, copy) NSString *eyeAlae_defaultValue;
@property (nonatomic, copy) NSString *eyeAlae_minValue;
@property (nonatomic, copy) NSString *eyeAlae_maxValue;
+ (instancetype)mh_quickBeautyModelWithDictionary:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END


