/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUILibraryProductLockupViewLayout.h>

@class VUIMediaEntityType, NSString;

@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout> {

	long long _type;
	VUIMediaEntityType* _entityType;

}

@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) VUIMediaEntityType * entityType;              //@synthesize entityType=_entityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIMediaEntityType *)entityType;
-(long long)type;
-(id)initWithLayoutType:(long long)arg1 entityType:(id)arg2 ;
-(CGSize)coverArtImageSize;
-(int)contentDescriptionNumberOfLines;
-(id)contentDescriptionFont;
-(long long)layoutTypeForWindowWidth:(double)arg1 ;
-(double)coverArtImageRightMargin;
-(double)contentDescriptionTopMarginForWindowWidth:(double)arg1 ;
-(double)buttonModuleTopMarginForWindowWidth:(double)arg1 ;
-(double)subtitleTopMarginForWindowWidth:(double)arg1 ;
-(double)contentDescriptionBottomMarginForWindowWidth:(double)arg1 ;
-(double)metadataTopMargin;
-(long long)downloadButtonPosition;
-(double)coverArtBottomPadding;
-(double)titleTopMargin;
-(BOOL)shouldShowTitleLabel;
@end
