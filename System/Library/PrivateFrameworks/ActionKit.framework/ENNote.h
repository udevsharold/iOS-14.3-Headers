/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNaming.h>

@class NSMutableArray, NSString, ENNoteContent, NSArray, EDAMNote, NSDictionary, NSDate;

@interface ENNote : NSObject <WFNaming> {

	NSMutableArray* _resources;
	BOOL _isReminder;
	NSString* _title;
	ENNoteContent* _content;
	NSArray* _tagNames;
	NSString* _sourceUrl;
	NSString* _cachedENMLContent;
	EDAMNote* _serviceNote;
	NSDictionary* _edamAttributes;

}

@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,copy) NSString * sourceUrl;                         //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (nonatomic,copy) NSString * cachedENMLContent;                 //@synthesize cachedENMLContent=_cachedENMLContent - In the implementation block
@property (nonatomic,retain) EDAMNote * serviceNote;                     //@synthesize serviceNote=_serviceNote - In the implementation block
@property (nonatomic,retain) NSDictionary * edamAttributes;              //@synthesize edamAttributes=_edamAttributes - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) ENNoteContent * content;                    //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSArray * tagNames;                           //@synthesize tagNames=_tagNames - In the implementation block
@property (assign,nonatomic) BOOL isReminder;                            //@synthesize isReminder=_isReminder - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSArray * resources; 
-(ENNoteContent *)content;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(void)setContent:(ENNoteContent *)arg1 ;
-(id)init;
-(void)setResources:(NSArray *)arg1 ;
-(void)addResource:(id)arg1 ;
-(NSArray *)tagNames;
-(NSString *)wfName;
-(void)setSourceUrl:(NSString *)arg1 ;
-(void)removeAllResources;
-(NSArray *)resources;
-(NSString *)sourceUrl;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTagNames:(NSArray *)arg1 ;
-(NSString *)title;
-(id)initWithServiceNote:(id)arg1 ;
-(void)generateWebArchiveData:(/*^block*/id)arg1 ;
-(void)generateHTMLData:(/*^block*/id)arg1 ;
-(void)invalidateCachedENML;
-(id)enmlContent;
-(id)EDAMNote;
-(id)EDAMNoteToReplaceServiceNoteGUID:(id)arg1 ;
-(BOOL)validateForLimits;
-(id)generateENMLContent;
-(BOOL)isReminder;
-(void)setIsReminder:(BOOL)arg1 ;
-(NSString *)cachedENMLContent;
-(void)setCachedENMLContent:(NSString *)arg1 ;
-(EDAMNote *)serviceNote;
-(void)setServiceNote:(EDAMNote *)arg1 ;
-(NSDictionary *)edamAttributes;
-(void)setEdamAttributes:(NSDictionary *)arg1 ;
@end
