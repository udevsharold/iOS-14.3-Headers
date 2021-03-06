/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NADescriptionBuilder, NSString;


@protocol WKDescribable <NSObject>
@property (nonatomic,readonly) NADescriptionBuilder * wk_descriptionBuilder; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,readonly) id descriptionBuilderBlock; 
@required
-(NSString *)description;
-(id)descriptionBuilderBlock;
-(NADescriptionBuilder *)wk_descriptionBuilder;

@end

