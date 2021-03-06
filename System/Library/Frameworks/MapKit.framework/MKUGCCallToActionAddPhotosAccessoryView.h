/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString;

@interface MKUGCCallToActionAddPhotosAccessoryView : UIView {

	UIButton* _addPhotosButton;
	NSString* _glyphName;

}

@property (nonatomic,copy) NSString * glyphName;              //@synthesize glyphName=_glyphName - In the implementation block
-(void)setGlyphName:(NSString *)arg1 ;
-(NSString *)glyphName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setupButtons;
-(void)_contentSizeChanged;
@end

