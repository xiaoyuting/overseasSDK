//
//  platLogin.h
//  loginSDK
//
//  Created by xy on 2020/11/11.
//  Copyright © 2020 gumo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <loginSDK/LoginCallBack.h>
#import <loginSDK/UserInfoModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface platLogin : NSObject
#pragma 登陆
/**
 必须接入的方法  登录
 @param mLoginCallBack 回调
 */
+ (void) login:(id<LoginCallBack>)mLoginCallBack;

#pragma 退出

/**
 账号退出
 */
+ (void) logout;

/**
 删除账号
 */
+ (void)deleteAccount;

/**
 应用退出账号自动显示历史账号页面
 */
+ (void) WithInApplicationLogout;

/**
 查看当前的登录状态
 @return true or false
 */
+ (BOOL) isLogin;

/**
 获取用户信息
 @return 用户信息
 */
+(UserInfoModel*)getUserInfo;

/**
 获取游戏用户的唯一ID
 @return uid
 */
+ (NSString*) getUid;

/**
 获取用户名
 @return Nickname
 */
+ (NSString*) getNickname;

/**
 获取Token
 @return Token
 */
+ (NSString*) getToken;

/**
 游戏中调用返回提示，部分SDK需要调用SDK的退出提示，暂时没用,预留接口
 */
+ (void) quit;

/**
 显示绑定页面
 */
+ (void)userInfoBindView;

 
/**
 是否可以绑定
 结果在通知中回调
 */
+ (void) isCanBind ;


/**
 应用内切换账号
 */
+ (void) WithInApplicationSwitch;



+ (void)authAssToken;


/**
 uiserid登录
 */
+ (void)UserIDLogin:(NSString *)uid;
/**
 Facebook登录
 */
+ (void)FaceBookLogin ;

/**
 Line登录
 */
+ (void)LineLogin;

/**
 Twiiter登录
 */
+ (void)TwitterLogin ;

+ (void)TwitterV2Login;

/**
 Google登录
 */
+ (void)GoogleLogin ;

/**
 游客登录
 */
+ (void)GuestLogin ;

/**
 Apple登录
 */
+ (void)AppleLogin ;

/**
 邮箱登录
 */
+ (void)EmailLogin;

/**
 绑定Facebook
 */
+ (void)FaceBookBind ;

/**
 绑定Line
 */
+ (void)LineBind;

/**
 绑定Twitter
 */
+ (void)TwitterBind;
+ (void)TwitterV2Bind;

/**
 绑定Google
 */
+ (void)GoogleBind ;

/**
 绑定Apple
 */
+ (void)AppleBind;

/**
 绑定Email
 */
+ (void)EmailBinb;

/**
 绑定Facebook
 */
+ (void)FaceBookNewBind ;

/**
 绑定Line
 */
+ (void)LineNewBind;

/**
 绑定Twitter
 */
+ (void)TwitterNewBind;
+ (void)TwitterV2NewBind ;

/**
 绑定Google
 */
+ (void)GoogleNewBind ;

/**
 绑定Apple
 */
+ (void)AppleNewBind;

/**
 绑定Email
 */
+ (void)EmailNewBinb;


+ (void)TwitterV2Remove ;
@end

NS_ASSUME_NONNULL_END
