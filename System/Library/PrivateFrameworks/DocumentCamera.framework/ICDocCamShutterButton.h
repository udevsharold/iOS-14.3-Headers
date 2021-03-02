/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIButton.h>

@interface ICDocCamShutterButton : UIButton {

	BOOL _pseudoDisabled;

}

@property (assign,getter=isPseudoDisabled,nonatomic) BOOL pseudoDisabled;              //@synthesize pseudoDisabled=_pseudoDisabled - In the implementation block
-(void)commonInit;
-(id)initWithCoder:(id)arg1 ;
-(id)innerCircle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)outerRingImage;
-(void)setPseudoDisabled:(BOOL)arg1 ;
-(BOOL)isPseudoDisabled;
@end
