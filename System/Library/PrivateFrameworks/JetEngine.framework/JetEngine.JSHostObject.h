/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_.h>

@class NSString;

@interface JetEngine.JSHostObject : NSObject <_TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_>

@property (readonly,nonatomic) NSString * platform; 
@property (readonly,nonatomic) NSString * osBuild; 
@property (readonly,nonatomic) NSString * deviceModel; 
@property (readonly,nonatomic) NSString * deviceLocalizedModel; 
@property (readonly,nonatomic) NSString * clientIdentifier; 
@property (readonly,nonatomic) NSString * clientVersion; 
-(NSString *)deviceModel;
-(NSString *)osBuild;
-(id)init;
-(NSString *)platform;
-(NSString *)deviceLocalizedModel;
-(NSString *)clientVersion;
-(BOOL)isOSAtLeast:(id)arg1 :(id)arg2 :(id)arg3 ;
-(NSString *)clientIdentifier;
@end

