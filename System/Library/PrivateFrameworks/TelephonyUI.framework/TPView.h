/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface TPView : UIView {

	BOOL _accessiblityConstraintsEnabled;
	BOOL _constraintsLoaded;

}

@property (assign,getter=isAccessiblityConstraintsEnabled,nonatomic) BOOL accessiblityConstraintsEnabled;              //@synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled - In the implementation block
@property (assign,getter=isConstraintsLoaded,nonatomic) BOOL constraintsLoaded;                                        //@synthesize constraintsLoaded=_constraintsLoaded - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)commonInit;
-(void)updateConstraints;
-(BOOL)isAccessiblityConstraintsEnabled;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isConstraintsLoaded;
-(void)setConstraintsLoaded:(BOOL)arg1 ;
-(void)loadConstraints;
-(id)initWithCoder:(id)arg1 ;
-(void)unloadConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessiblityConstraintsEnabled:(BOOL)arg1 ;
-(void)updateFonts;
-(void)updateConstraintsConstants;
@end

