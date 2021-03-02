/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRUIDevice.h>

@class NSString;

@interface TVRUIUnpairedDevices : NSObject <TVRUIDevice>

@property (assign,nonatomic,__weak) id<TVRUIDeviceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(void)connect;
-(id)model;
-(BOOL)isConnecting;
-(id)identifier;
-(BOOL)isConnected;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(id)name;
-(void)setDelegate:(id<TVRUIDeviceDelegate>)arg1 ;
-(id<TVRUIDeviceDelegate>)delegate;
-(BOOL)supportsTouchEvents;
-(void)disconnectUserInitiated;
-(void)disconnectSystemInitiated;
-(BOOL)supportsDonatingIntents;
-(BOOL)hasIdentifier:(id)arg1 ;
-(void)disconnectWithTimeOut;
@end
