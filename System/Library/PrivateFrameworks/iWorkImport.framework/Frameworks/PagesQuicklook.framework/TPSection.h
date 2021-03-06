/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/TSKDocumentObject.h>
#import <libobjc.A.dylib/TSKModel.h>
#import <libobjc.A.dylib/TSWPSection.h>

@class TPPageMaster, TSWPStorage, NSString, NSUUID, TSDFill, TPPageTemplate, NSArray, NSURL;

@interface TPSection : TSPObject <TSKDocumentObject, TSKModel, TSWPSection> {

	TPPageMaster* _pageMasters[3];
	TSWPStorage* _parentStorage;
	NSString* _name;
	NSUUID* _sectionHyperlinkUUID;
	BOOL _inheritPreviousHeaderFooter;
	BOOL _pageMasterFirstPageDifferent;
	BOOL _pageMasterFirstPageHidesHeaderFooter;
	BOOL _pageMasterEvenOddPagesDifferent;
	unsigned _sectionStartKind;
	unsigned _sectionPageNumberKind;
	unsigned _sectionPageNumberStart;
	TSDFill* _backgroundFill;

}

@property (nonatomic,readonly) TPPageTemplate * pageTemplate; 
@property (nonatomic,readonly) NSArray * pageInfosForPropagation; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSUUID * sectionHyperlinkUUID; 
@property (nonatomic,readonly) NSString * localizedPrettyDisplayStringShort; 
@property (nonatomic,readonly) NSString * localizedPrettyDisplayStringLong; 
@property (assign,nonatomic,__weak) TSWPStorage * parentStorage; 
@property (assign,nonatomic) BOOL inheritPreviousHeaderFooter; 
@property (assign,nonatomic) BOOL pageMasterFirstPageDifferent; 
@property (assign,nonatomic) BOOL pageMasterFirstPageHidesHeaderFooter; 
@property (assign,nonatomic) BOOL pageMasterEvenOddPagesDifferent; 
@property (nonatomic,retain) TSDFill * backgroundFill;                                    //@synthesize backgroundFill=_backgroundFill - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (assign,nonatomic) unsigned sectionStartKind; 
@property (assign,nonatomic) unsigned sectionPageNumberKind; 
@property (assign,nonatomic) unsigned sectionPageNumberStart; 
@property (nonatomic,readonly) NSArray * pageMasters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)needsObjectUUID;
-(void)setName:(NSString *)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSString *)name;
-(id)allDrawables;
-(id)copyWithContext:(id)arg1 ;
-(id)childEnumerator;
-(NSURL *)url;
-(TPPageTemplate *)pageTemplate;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 ;
-(TSDFill *)backgroundFill;
-(id)objectUUIDPath;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isHeaderFooterEmpty:(long long)arg1 ;
-(BOOL)inheritPreviousHeaderFooter;
-(void)setInheritPreviousHeaderFooter:(BOOL)arg1 ;
-(BOOL)pageMasterFirstPageDifferent;
-(void)setPageMasterFirstPageDifferent:(BOOL)arg1 ;
-(BOOL)pageMasterFirstPageHidesHeaderFooter;
-(void)setPageMasterFirstPageHidesHeaderFooter:(BOOL)arg1 ;
-(BOOL)pageMasterEvenOddPagesDifferent;
-(void)setPageMasterEvenOddPagesDifferent:(BOOL)arg1 ;
-(unsigned)sectionStartKind;
-(void)setSectionStartKind:(unsigned)arg1 ;
-(unsigned)sectionPageNumberKind;
-(void)setSectionPageNumberKind:(unsigned)arg1 ;
-(unsigned)sectionPageNumberStart;
-(void)setSectionPageNumberStart:(unsigned)arg1 ;
-(void)setBackgroundFill:(TSDFill *)arg1 ;
-(void)i_clearPropertiesToDefaults;
-(void)p_makeUserGuideStorage;
-(void)p_unarchiveAndUpgrade:(id)arg1 archive:(const SectionArchive*)arg2 ;
-(void)p_upgradePageSizeAndMarginsFromParsedArchive:(const SectionArchive*)arg1 ;
-(NSUUID *)sectionHyperlinkUUID;
-(id)initWithContext:(id)arg1 section:(id)arg2 ;
-(NSArray *)pageMasters;
-(id)pageMasterForType:(long long)arg1 ;
-(void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)p_addAllDrawablesFromInfo:(id)arg1 toMutableArray:(id)arg2 ;
-(BOOL)isHeaderFooterVisible:(long long)arg1 ;
-(void)setSectionHyperlinkUUID:(NSUUID *)arg1 ;
-(NSString *)localizedPrettyDisplayStringShort;
-(NSString *)localizedPrettyDisplayStringLong;
-(void)setPageMasterForFirstPage:(id)arg1 ;
-(id)pageMasterOwningModel:(id)arg1 ;
-(NSArray *)pageInfosForPropagation;
@end

