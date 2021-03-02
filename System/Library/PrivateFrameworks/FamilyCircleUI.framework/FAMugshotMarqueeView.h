/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableDictionary, FAProfilePictureStore, UIStackView;

@interface FAMugshotMarqueeView : UIView {

	NSMutableDictionary* _memberPhotoMap;
	FAProfilePictureStore* _pictureStore;
	UIStackView* _marquee;

}
-(void)dealloc;
-(void)_configureStackView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_configureMarquee;
-(void)_profilePictureStoreDidReloadImages:(id)arg1 ;
-(id)_configureImageWithData:(id)arg1 ;
-(id)_configureImageViewWithImage:(id)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 profilePictureStore:(id)arg2 ;
@end
