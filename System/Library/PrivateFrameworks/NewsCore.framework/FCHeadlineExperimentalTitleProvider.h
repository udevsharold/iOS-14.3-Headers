/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject {

	BOOL _shouldShowAlternateHeadlines;
	NSString* _feldsparID;

}

@property (nonatomic,copy,readonly) NSString * feldsparID;                   //@synthesize feldsparID=_feldsparID - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAlternateHeadlines;              //@synthesize shouldShowAlternateHeadlines=_shouldShowAlternateHeadlines - In the implementation block
+(BOOL)isDebugModeEnabled;
-(id)initWithShouldShowAlternateHeadlines:(BOOL)arg1 ;
-(BOOL)shouldShowAlternateHeadlines;
-(NSString *)feldsparID;
-(id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)metadataForDefaultHeadlineWithTitle:(id)arg1 ;
-(void)setShouldShowAlternateHeadlines:(BOOL)arg1 ;
@end
