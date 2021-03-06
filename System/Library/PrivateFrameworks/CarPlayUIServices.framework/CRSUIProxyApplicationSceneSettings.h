/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIProxyApplicationSceneSettings.h>
@class NSString;


@protocol CRSUIProxyApplicationSceneSettings <CRSUIMapStyleProviding>
@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@required
-(NSString *)proxiedApplicationBundleIdentifier;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;

@end


@class NSString;

@interface CRSUIProxyApplicationSceneSettings : CRSUIApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>

@property (nonatomic,copy,readonly) NSString * proxiedApplicationBundleIdentifier; 
@property (nonatomic,readonly) BOOL proxiedApplicationLinkedOnOrAfterYukon; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)proxiedApplicationBundleIdentifier;
-(long long)mapStyle;
-(BOOL)proxiedApplicationLinkedOnOrAfterYukon;
@end

