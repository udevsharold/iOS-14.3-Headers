/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString, UIView;

@interface TVModalPresenterConfiguration : NSObject {

	BOOL _allowsModalOverModal;
	BOOL _allowsMenuDismissal;
	BOOL _navigationBarHidden;
	NSString* _barButtonID;
	unsigned long long _configurationType;
	long long _presentationStyle;
	UIView* _sourceView;
	CGSize _formSheetSize;
	CGSize _popoverSize;
	CGRect _sourceRect;

}

@property (assign,nonatomic) BOOL allowsModalOverModal;                         //@synthesize allowsModalOverModal=_allowsModalOverModal - In the implementation block
@property (assign,nonatomic) BOOL allowsMenuDismissal;                          //@synthesize allowsMenuDismissal=_allowsMenuDismissal - In the implementation block
@property (nonatomic,copy) NSString * barButtonID;                              //@synthesize barButtonID=_barButtonID - In the implementation block
@property (assign,nonatomic) unsigned long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (assign,nonatomic) CGSize formSheetSize;                              //@synthesize formSheetSize=_formSheetSize - In the implementation block
@property (assign,nonatomic) CGSize popoverSize;                                //@synthesize popoverSize=_popoverSize - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden;                          //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic) long long presentationStyle;                       //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                               //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                 //@synthesize sourceRect=_sourceRect - In the implementation block
-(void)setSourceView:(UIView *)arg1 ;
-(id)init;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGRect)sourceRect;
-(long long)presentationStyle;
-(UIView *)sourceView;
-(void)setPresentationStyle:(long long)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)formSheetSize;
-(void)setFormSheetSize:(CGSize)arg1 ;
-(unsigned long long)configurationType;
-(BOOL)navigationBarHidden;
-(CGSize)popoverSize;
-(BOOL)allowsModalOverModal;
-(NSString *)barButtonID;
-(void)_configureWithDictionary:(id)arg1 ;
-(void)setAllowsModalOverModal:(BOOL)arg1 ;
-(BOOL)allowsMenuDismissal;
-(void)setAllowsMenuDismissal:(BOOL)arg1 ;
-(void)setBarButtonID:(NSString *)arg1 ;
-(void)setPopoverSize:(CGSize)arg1 ;
@end

