/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarImageRenderingScope;
#import <ContactsUI/ContactsUI-Structs.h>
@class CNAvatarImageRenderer;

@interface CNVisualIdentityContactAvatarProvider : NSObject {

	CNAvatarImageRenderer* _avatarImageRenderer;
	id<CNAvatarImageRenderingScope> _renderingScope;

}

@property (nonatomic,retain) CNAvatarImageRenderer * avatarImageRenderer;                 //@synthesize avatarImageRenderer=_avatarImageRenderer - In the implementation block
@property (nonatomic,retain) id<CNAvatarImageRenderingScope> renderingScope;              //@synthesize renderingScope=_renderingScope - In the implementation block
+(id)descriptorForRequiredKeys;
-(id)init;
-(id)avatarImageForContact:(id)arg1 withSize:(CGSize)arg2 includePlaceholder:(BOOL)arg3 imageHandler:(/*^block*/id)arg4 ;
-(CNAvatarImageRenderer *)avatarImageRenderer;
-(void)setAvatarImageRenderer:(CNAvatarImageRenderer *)arg1 ;
-(id<CNAvatarImageRenderingScope>)renderingScope;
-(void)setRenderingScope:(id<CNAvatarImageRenderingScope>)arg1 ;
-(id)initWithSettings:(id)arg1 ;
@end

