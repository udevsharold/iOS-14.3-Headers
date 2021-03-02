/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataRequest.h>
#import <libobjc.A.dylib/WBSIconRequest.h>

@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest> {

	BOOL _iconGenerationEnabled;
	BOOL _iconDownloadingEnabled;
	NSString* _monogramTitle;
	CGSize _minimumIconSize;
	CGSize _maximumIconSize;

}

@property (getter=isIconGenerationEnabled,nonatomic,readonly) BOOL iconGenerationEnabled;                //@synthesize iconGenerationEnabled=_iconGenerationEnabled - In the implementation block
@property (getter=isIconDownloadingEnabled,nonatomic,readonly) BOOL iconDownloadingEnabled;              //@synthesize iconDownloadingEnabled=_iconDownloadingEnabled - In the implementation block
@property (nonatomic,readonly) CGSize minimumIconSize;                                                   //@synthesize minimumIconSize=_minimumIconSize - In the implementation block
@property (nonatomic,readonly) CGSize maximumIconSize;                                                   //@synthesize maximumIconSize=_maximumIconSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * monogramTitle;                                            //@synthesize monogramTitle=_monogramTitle - In the implementation block
@property (nonatomic,readonly) CGSize sizeForDrawing; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 iconDownloadingEnabled:(BOOL)arg6 ;
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
-(CGSize)maximumIconSize;
-(unsigned long long)hash;
-(NSString *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)sizeForDrawing;
-(BOOL)isIconGenerationEnabled;
-(NSString *)monogramTitle;
-(BOOL)isIconDownloadingEnabled;
-(CGSize)minimumIconSize;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 iconDownloadingEnabled:(BOOL)arg6 ;
@end
