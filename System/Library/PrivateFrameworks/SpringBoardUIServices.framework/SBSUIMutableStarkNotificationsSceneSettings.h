/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/SBSUIStarkNotificationsSceneSettings.h>

@class BSServiceConnectionEndpoint, NSString;

@interface SBSUIMutableStarkNotificationsSceneSettings : UIMutableApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (assign,getter=isConnectedWirelessly,nonatomic) BOOL connectedWirelessly; 
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported; 
@property (assign,nonatomic) unsigned long long suspensionReasons; 
@property (nonatomic,retain) BSServiceConnectionEndpoint * openServiceEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isConnectedWirelessly;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
-(void)setConnectedWirelessly:(BOOL)arg1 ;
-(void)setSuspensionReasons:(unsigned long long)arg1 ;
-(void)setOpenServiceEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(unsigned long long)suspensionReasons;
-(BOOL)isGeoSupported;
-(void)setGeoSupported:(BOOL)arg1 ;
@end

