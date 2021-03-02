/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingAvatarProvider, CNAvatarImageProvider;
@class UIView, CAShapeLayer, UIImageView, UILabel, CNAvatarViewController, UITapGestureRecognizer;

@interface CNMeCardSharingAvatarViewController : UIViewController {

	BOOL _hasImage;
	id<CNMeCardSharingAvatarViewControllerDelegate> _delegate;
	UIView* _avatarContainerView;
	CAShapeLayer* _circularLayer;
	UIImageView* _imageView;
	UILabel* _addPhotoLabel;
	id<CNMeCardSharingAvatarProvider> _avatarProvider;
	id<CNAvatarImageProvider> _fallbackImageProvider;
	CNAvatarViewController* _avatarViewController;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic) BOOL hasImage;                                                                //@synthesize hasImage=_hasImage - In the implementation block
@property (nonatomic,retain) UIView * avatarContainerView;                                                 //@synthesize avatarContainerView=_avatarContainerView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * circularLayer;                                                 //@synthesize circularLayer=_circularLayer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * addPhotoLabel;                                                      //@synthesize addPhotoLabel=_addPhotoLabel - In the implementation block
@property (nonatomic,retain) id<CNMeCardSharingAvatarProvider> avatarProvider;                             //@synthesize avatarProvider=_avatarProvider - In the implementation block
@property (nonatomic,retain) id<CNAvatarImageProvider> fallbackImageProvider;                              //@synthesize fallbackImageProvider=_fallbackImageProvider - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                                //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingAvatarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)reload;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)hasImage;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setAvatarProvider:(id<CNMeCardSharingAvatarProvider>)arg1 ;
-(UIImageView *)imageView;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setHasImage:(BOOL)arg1 ;
-(void)updateForChangedImageAnimated:(BOOL)arg1 ;
-(CAShapeLayer *)circularLayer;
-(void)didTapAvatarView:(id)arg1 ;
-(UIView *)avatarContainerView;
-(void)setAvatarContainerView:(UIView *)arg1 ;
-(void)setCircularLayer:(CAShapeLayer *)arg1 ;
-(UILabel *)addPhotoLabel;
-(void)setAddPhotoLabel:(UILabel *)arg1 ;
-(id<CNAvatarImageProvider>)fallbackImageProvider;
-(void)setFallbackImageProvider:(id<CNAvatarImageProvider>)arg1 ;
-(id<CNMeCardSharingAvatarProvider>)avatarProvider;
-(void)setDelegate:(id<CNMeCardSharingAvatarViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithAvatarProvider:(id)arg1 ;
-(void)updateWithAvatarProvider:(id)arg1 ;
-(id<CNMeCardSharingAvatarViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
@end
