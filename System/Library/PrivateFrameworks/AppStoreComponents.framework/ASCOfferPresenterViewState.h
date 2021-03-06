/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCOfferMetadata, ASCOfferTheme;

@interface ASCOfferPresenterViewState : NSObject <NSCopying> {

	ASCOfferMetadata* _metadata;
	ASCOfferTheme* _theme;

}

@property (nonatomic,copy,readonly) ASCOfferMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) ASCOfferTheme * theme;                    //@synthesize theme=_theme - In the implementation block
-(ASCOfferTheme *)theme;
-(ASCOfferMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMetadata:(id)arg1 theme:(id)arg2 ;
@end

