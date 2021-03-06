/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class UIColor, UIMenu;

@interface ICRDActivity : UIActivity {

	BOOL _isDisabled;
	BOOL _performActivityShouldDismissViewController;
	UIColor* _activityTintColor;
	UIMenu* _menu;
	long long _contextPathEnum;
	/*^block*/id _performActivityBlock;

}

@property (nonatomic,copy) id performActivityBlock;                                        //@synthesize performActivityBlock=_performActivityBlock - In the implementation block
@property (nonatomic,copy) UIColor * activityTintColor;                                    //@synthesize activityTintColor=_activityTintColor - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                              //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic) BOOL performActivityShouldDismissViewController;              //@synthesize performActivityShouldDismissViewController=_performActivityShouldDismissViewController - In the implementation block
@property (nonatomic,readonly) UIMenu * menu;                                              //@synthesize menu=_menu - In the implementation block
@property (assign,nonatomic) long long contextPathEnum;                                    //@synthesize contextPathEnum=_contextPathEnum - In the implementation block
+(id)defaultTintColor;
-(BOOL)isDisabled;
-(UIMenu *)menu;
-(void)commonInit;
-(id)init;
-(void)performActivity;
-(void)setIsDisabled:(BOOL)arg1 ;
-(void)performActivityWithCompletion:(/*^block*/id)arg1 ;
-(id)performActivityBlock;
-(id)initWithPerformActivity:(/*^block*/id)arg1 ;
-(UIColor *)activityTintColor;
-(void)setActivityTintColor:(UIColor *)arg1 ;
-(BOOL)performActivityShouldDismissViewController;
-(void)setPerformActivityShouldDismissViewController:(BOOL)arg1 ;
-(long long)contextPathEnum;
-(void)setContextPathEnum:(long long)arg1 ;
-(void)setPerformActivityBlock:(id)arg1 ;
@end

