/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCancelable;
@class CALayer;

@interface CNUIAvatarLayoutLayerItem : NSObject {

	CALayer* _layer;
	id<CNCancelable> _avatarImageRendererToken;

}

@property (nonatomic,retain) CALayer * layer;                                        //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) id<CNCancelable> avatarImageRendererToken;              //@synthesize avatarImageRendererToken=_avatarImageRendererToken - In the implementation block
-(void)setLayer:(CALayer *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)resetToken;
-(id<CNCancelable>)avatarImageRendererToken;
-(void)setAvatarImageRendererToken:(id<CNCancelable>)arg1 ;
-(CALayer *)layer;
@end

