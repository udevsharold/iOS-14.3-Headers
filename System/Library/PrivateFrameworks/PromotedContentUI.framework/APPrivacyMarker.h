/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PromotedContentUI/PromotedContentUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/APPCVisibilityIgnorable.h>

@interface APPrivacyMarker : UIButton <APPCVisibilityIgnorable> {

	 titleLabelRegularFontSize;
	 markerLabel;
	 markerView;
	 privacyMarkerType;
	 privacyMarkerPosition;
	 minimumTappableSize;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(CGSize)intrinsicContentSize;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)sizeCategoryChanged:(id)arg1 ;
-(void)systemColorStatusChanged:(id)arg1 ;
@end
