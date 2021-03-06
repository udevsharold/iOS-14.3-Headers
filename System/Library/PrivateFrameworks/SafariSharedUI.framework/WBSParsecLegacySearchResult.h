/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>
#import <libobjc.A.dylib/WBSParsecSearchResult.h>
#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class NSString, NSURL, WBSParsecActionButton, MKMapItem, WBSParsecImageRepresentation, SFSearchResult, WBSQuerySuggestion;

@interface WBSParsecLegacySearchResult : WBSParsecModel <WBSParsecSearchResult, WBSCompletionListItem> {

	WBSParsecImageRepresentation* _icon;
	WBSParsecImageRepresentation* _completionIcon;
	BOOL _topHit;
	SFSearchResult* _sfSearchResult;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _identifier;
	NSString* _feedbackIdentifier;
	NSString* _urlString;
	NSString* _sectionHeader;
	NSString* _completion;
	NSString* _query;
	unsigned long long _legacyType;
	unsigned long long _minimumRankOfTopHitToSuppressResult;
	NSURL* _appPunchoutURL;
	NSString* _mediaKind;
	NSString* _referrerForLoadingResult;
	WBSParsecActionButton* _actionButton;
	MKMapItem* _mapItem;
	SFSearchResult* _sfSearchResultValue;
	NSString* _sectionBundleIdentifier;
	long long _parsecQueryID;

}

@property (nonatomic,readonly) unsigned long long legacyType;                                       //@synthesize legacyType=_legacyType - In the implementation block
@property (nonatomic,retain) SFSearchResult * sfSearchResultValue;                                  //@synthesize sfSearchResultValue=_sfSearchResultValue - In the implementation block
@property (nonatomic,copy) NSString * sectionBundleIdentifier;                                      //@synthesize sectionBundleIdentifier=_sectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) long long parsecQueryID;                                               //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;                                          //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * feedbackIdentifier;                                       //@synthesize feedbackIdentifier=_feedbackIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                                                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * sectionHeader;                                            //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,readonly) NSString * completion;                                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSString * query;                                               //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumRankOfTopHitToSuppressResult;              //@synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult - In the implementation block
@property (nonatomic,readonly) NSURL * appPunchoutURL;                                              //@synthesize appPunchoutURL=_appPunchoutURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKind;                                           //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrerForLoadingResult;                            //@synthesize referrerForLoadingResult=_referrerForLoadingResult - In the implementation block
@property (nonatomic,readonly) WBSParsecActionButton * actionButton;                                //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem;                                                 //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * completionIcon;                       //@synthesize completionIcon=_completionIcon - In the implementation block
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)schema;
+(Class)_resultClassForDictionary:(id)arg1 ;
+(id)_specializedSchema;
+(id)resultWithDictionary:(id)arg1 ;
-(NSString *)urlString;
-(NSString *)descriptionText;
-(NSString *)mediaKind;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(WBSParsecImageRepresentation *)completionIcon;
-(NSString *)query;
-(WBSParsecImageRepresentation *)icon;
-(NSString *)completion;
-(NSString *)identifier;
-(NSString *)description;
-(long long)parsecQueryID;
-(void)setParsecQueryID:(long long)arg1 ;
-(WBSParsecActionButton *)actionButton;
-(void)setSectionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sectionHeader;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;
-(id)initWithDictionary:(id)arg1 ;
-(MKMapItem *)mapItem;
-(NSString *)title;
-(NSString *)sectionBundleIdentifier;
-(NSString *)parsecDomainIdentifier;
-(id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1 ;
-(BOOL)canBecomeTopHitForQuery:(id)arg1 ;
-(id)iconWithSession:(id)arg1 ;
-(id)completionIconWithSession:(id)arg1 ;
-(NSString *)feedbackIdentifier;
-(NSURL *)appPunchoutURL;
-(NSString *)referrerForLoadingResult;
-(id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2 ;
-(unsigned long long)legacyType;
-(void)setSfSearchResultValue:(SFSearchResult *)arg1 ;
@end

