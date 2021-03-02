/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSWPStorage, TPPageIndexPath, NSArray, TPSection, TPSectionHint, NSString;

@interface PagesQuicklook.TPPaginationState : NSObject <NSCopying> {

	 bodyStorage;
	 isInvalid;
	 _pageIndexPath;
	 _documentPageIndex;
	 _lastLaidOutSectionIndex;
	 _bodyLayoutState;
	 _bodyCharIndex;
	 _footnoteIndex;
	 _sectionHints;

}

@property (readonly,nonatomic) TSWPStorage * bodyStorage; 
@property (assign,nonatomic) BOOL isInvalid; 
@property (retain,nonatomic) TPPageIndexPath * pageIndexPath; 
@property (assign,nonatomic) unsigned long long documentPageIndex; 
@property (assign,nonatomic) unsigned long long lastLaidOutSectionIndex; 
@property (assign,nonatomic) void* bodyLayoutState; 
@property (assign,nonatomic) unsigned long long bodyCharIndex; 
@property (assign,nonatomic) unsigned long long footnoteIndex; 
@property (copy,nonatomic) NSArray * sectionHints; 
@property (assign,nonatomic) unsigned long long sectionIndex; 
@property (assign,nonatomic) unsigned long long pageIndex; 
@property (readonly,nonatomic) unsigned long long lastLaidOutDocumentPageIndex; 
@property (readonly,nonatomic) TPSection * section; 
@property (readonly,nonatomic) TPSectionHint * sectionHint; 
@property (readonly,nonatomic) NSRange sectionCharRange; 
@property (readonly,nonatomic) BOOL onLastSection; 
@property (readonly,nonatomic) BOOL isPaginationComplete; 
@property (readonly,nonatomic) NSString * description; 
-(TPSection *)section;
-(id)init;
-(id)copyWithZone:(void*)arg1 ;
-(void)setIsInvalid:(BOOL)arg1 ;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(BOOL)isInvalid;
-(NSString *)description;
-(unsigned long long)sectionIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndex;
-(TSWPStorage *)bodyStorage;
-(BOOL)isPaginationComplete;
-(id)copyForCaching;
-(unsigned long long)documentPageIndex;
-(void)setDocumentPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastLaidOutDocumentPageIndex;
-(id)pageHintForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)bodyCharIndex;
-(NSRange)sectionCharRange;
-(BOOL)onLastSection;
-(void*)bodyLayoutState;
-(unsigned long long)footnoteIndex;
-(BOOL)isPaginationCompleteThroughDocumentPageIndex:(unsigned long long)arg1 ;
-(BOOL)isPaginationCompleteUpToDocumentPageIndex:(unsigned long long)arg1 ;
-(NSArray *)sectionHints;
-(void)setSectionHints:(NSArray *)arg1 ;
-(id)initWithBodyStorage:(id)arg1 ;
-(void)setBodyCharIndex:(unsigned long long)arg1 ;
-(void)setFootnoteIndex:(unsigned long long)arg1 ;
-(void)trimSectionHintsFromIndex:(unsigned long long)arg1 ;
-(void)restartPaginationFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(void)setBodyLayoutState:(void*)arg1 ;
-(void)backUpToPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(void)advancePageIndex;
-(TPPageIndexPath *)pageIndexPath;
-(TPSectionHint *)sectionHint;
-(void)removeAllSectionHints;
-(void)addSectionHint:(id)arg1 ;
-(void)advanceSectionIndex;
-(unsigned long long)lastLaidOutSectionIndex;
-(void)restartPaginationFromFirstPage;
-(void)setPageIndexPath:(TPPageIndexPath *)arg1 ;
-(void)setLastLaidOutSectionIndex:(unsigned long long)arg1 ;
-(NSRange)footnoteRangeInBodyTextRange:(NSRange)arg1 ;
-(id)pageIndexPathForPageIndex:(unsigned long long)arg1 ;
@end
