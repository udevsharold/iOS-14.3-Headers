/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCAssistantRemoteControlDestination.h>

@class NSString, NSArray;

@interface MPCAssistantMutableRemoteControlDestination : MPCAssistantRemoteControlDestination

@property (nonatomic,copy) NSString * appBundleID; 
@property (nonatomic,copy) NSString * playerID; 
@property (assign,nonatomic) void* origin; 
@property (nonatomic,copy) NSArray * outputDeviceUIDs; 
@property (nonatomic,copy) NSArray * hashedOutputDeviceUIDs; 
@property (nonatomic,copy) NSArray * outputGroups; 
@property (nonatomic,copy) NSString * outputGroupID; 
@property (assign,nonatomic) BOOL singleGroup; 
-(void)setOrigin:(void*)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)setOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setHashedOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setOutputGroups:(NSArray *)arg1 ;
-(void)setOutputGroupID:(NSString *)arg1 ;
-(void)setSingleGroup:(BOOL)arg1 ;
@end
