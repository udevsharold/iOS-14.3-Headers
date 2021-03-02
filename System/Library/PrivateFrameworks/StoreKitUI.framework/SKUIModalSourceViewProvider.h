/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIModalSourceViewProviderDelegate;
@class UIView, UIBarButtonItem;

@interface SKUIModalSourceViewProvider : NSObject {

	id<SKUIModalSourceViewProviderDelegate> _delegate;
	BOOL _hideOriginalSourceView;
	UIView* _originalSourceView;
	UIBarButtonItem* _sourceButtonBarItem;
	id _userInfo;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) id<SKUIModalSourceViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * originalSourceView;                                          //@synthesize originalSourceView=_originalSourceView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * sourceButtonBarItem;                                //@synthesize sourceButtonBarItem=_sourceButtonBarItem - In the implementation block
@property (nonatomic,retain) id userInfo;                                                          //@synthesize userInfo=_userInfo - In the implementation block
-(void)setUserInfo:(id)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(UIView *)sourceView;
-(id)userInfo;
-(id)animationView;
-(void)setDelegate:(id<SKUIModalSourceViewProviderDelegate>)arg1 ;
-(id<SKUIModalSourceViewProviderDelegate>)delegate;
-(void)setOriginalSourceView:(UIView *)arg1 ;
-(void)setSourceButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)sourceButtonBarItem;
-(UIView *)originalSourceView;
-(void)hideOriginalSourceView;
-(void)showOriginalSourceView;
@end
