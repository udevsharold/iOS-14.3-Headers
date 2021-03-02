/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTEnvironmentDelegate;
@interface MTEnvironment : MTObject {

	id<MTEnvironmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)os;
-(id)connectionType;
-(id)userAgent;
-(id)appVersion;
-(id)dsId;
-(id)osVersion;
-(id)pixelRatio;
-(id)app;
-(id)hardwareModel;
-(id)pageUrl;
-(BOOL)isAnonymous;
-(id)environmentDataCenter;
-(id)userType;
-(id)screenHeight;
-(id)screenWidth;
-(id)hostApp;
-(void)setDelegate:(id<MTEnvironmentDelegate>)arg1 ;
-(id)cookies;
-(id<MTEnvironmentDelegate>)delegate;
-(id)osBuildNumber;
-(id)hostAppVersion;
-(id)capacityData;
-(id)capacityDataAvailable;
-(id)capacityDisk;
-(id)capacitySystem;
-(id)capacitySystemAvailable;
-(id)environmentBuild;
-(id)environmentInstance;
-(id)hardwareFamily;
-(id)osLanguages;
-(id)parentPageUrl;
-(id)resourceRevNum;
-(id)storeFrontHeader;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;
@end
