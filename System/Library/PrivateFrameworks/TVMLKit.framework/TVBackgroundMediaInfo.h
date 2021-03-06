/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVMediaInfo.h>

@class IKAppPlayerBridge;

@interface TVBackgroundMediaInfo : TVMediaInfo {

	IKAppPlayerBridge* _playerBridge;

}

@property (nonatomic,retain) IKAppPlayerBridge * playerBridge;              //@synthesize playerBridge=_playerBridge - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(IKAppPlayerBridge *)playerBridge;
-(void)setPlayerBridge:(IKAppPlayerBridge *)arg1 ;
@end

