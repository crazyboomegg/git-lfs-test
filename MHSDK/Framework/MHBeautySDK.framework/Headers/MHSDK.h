//
//  MHSDK.h


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MHSDK : NSObject

+ (instancetype)shareInstance;

- (void)init:(NSString *)appKey;

- (void)dataTaskWithURLKey:(NSString *)urlKey responseCompletionHandler:(void (^)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))completionHandler;
/**
 获取sdk的版本0：基础版，1:专业版，2:精简版
 */
- (int)getSDKLevel;
@end

NS_ASSUME_NONNULL_END
