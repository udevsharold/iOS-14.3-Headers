/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PagesQuicklook/PagesQuicklook-Structs.h>
@class TPDocumentRoot;

@interface TPFootnoteLayoutController : NSObject {

	TPDocumentRoot* _documentRoot;
	BOOL _bumpedDocumentEndnotesForPageBreak;

}

@property (nonatomic,__weak,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(unsigned long long)p_layoutFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 measure:(BOOL)arg4 inflating:(BOOL)arg5 ;
-(id)p_footnoteReferenceStoragesInFootnoteIndexRange:(NSRange)arg1 ;
-(id)p_layoutForFootnoteReferenceStorage:(id)arg1 ;
-(NSRange)layOutFootnotesFromIndex:(unsigned long long)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 pageCharRange:(NSRange)arg4 sectionCharRange:(NSRange)arg5 isLastSection:(BOOL)arg6 sectionHint:(id)arg7 pageHintIndex:(unsigned long long)arg8 ;
-(void)inflateFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2 ;
-(NSRange)endnoteRangeForSectionCharRange:(NSRange)arg1 isLastSection:(BOOL)arg2 sectionHint:(id)arg3 ;
-(NSRange)footnoteLayoutRangeForPageCharRange:(NSRange)arg1 ;
-(void)removeDeletedFootnoteInContainer:(id)arg1 ;
@end
