/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSDContainerInfo.h>
#import <TSReading/TSKSearchable.h>
#import <TSReading/TSSThemedObject.h>
#import <TSReading/TSWPStorageParent.h>
#import <TSReading/TSSStyleClient.h>
#import <TSReading/TSWPTextSource.h>

@protocol TSDContainerInfo, TSDOwningAttachment;
@class NSObject, TSPObject, NSMutableString, TSWPStorageBroadcaster, TSKDocumentRoot, TSSStylesheet, TSDInfoGeometry, NSString;

@interface TSWPStorage : TSPObject <TSDContainerInfo, TSKSearchable, TSSThemedObject, TSWPStorageParent, TSSStyleClient, TSWPTextSource> {

	NSObject*<TSDContainerInfo> _parentInfo;
	TSPObject*<TSDOwningAttachment> _owningAttachment;
	NSMutableString* _string;
	TSWPAttributeArray* _attributesTable[19];
	TSWPStorageBroadcaster* _broadcaster;
	TSKDocumentRoot* _documentRoot;
	TSSStylesheet* _stylesheet;
	int _WPKind;
	unsigned _disallowElementKinds;
	BOOL _dolcSuppressed;
	BOOL _delayBroadcast;
	NSRange _rangeToBroadcast;
	int _writingDirectionCache;
	BOOL _isInInit;
	unsigned long long _changeCount;
	BOOL _ignoreContentsChangedNotifications;

}

@property (nonatomic,readonly) BOOL hasTrackedChanges; 
@property (nonatomic,readonly) TSWPChangeAttributeArray* insertionChangesTable; 
@property (nonatomic,readonly) TSWPChangeAttributeArray* deletionChangesTable; 
@property (assign,nonatomic) SCD_Struct_TS134 hyperlinkCellID; 
@property (nonatomic,readonly) BOOL isInInit;                                                          //@synthesize isInInit=_isInInit - In the implementation block
@property (assign,nonatomic) BOOL ignoreContentsChangedNotifications;                                  //@synthesize ignoreContentsChangedNotifications=_ignoreContentsChangedNotifications - In the implementation block
@property (nonatomic,readonly) unsigned long long changeCount;                                         //@synthesize changeCount=_changeCount - In the implementation block
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo;                                   //@synthesize parentInfo=_parentInfo - In the implementation block
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment;                         //@synthesize owningAttachment=_owningAttachment - In the implementation block
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,readonly) long long contentWritingDirection; 
+(void)initialize;
+(id)plainTextPasteStringForStorages:(id)arg1 forcePlainText:(BOOL)arg2 ;
+(TSWPAttributeArray*)createEmptyAttributeArrayForKind:(unsigned)arg1 ;
+(TSWPAttributeArray*)createAttributeArrayForKind:(unsigned)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
+(void)resetDisallowedElementKinds;
+(id)filterText:(id)arg1 removingAttachments:(BOOL)arg2 ;
+(Class)pStringClassForWPKind:(int)arg1 ;
+(void)setDisallowedElementKinds:(unsigned)arg1 forStorageKind:(int)arg2 ;
+(BOOL)allowsElementKind:(int)arg1 forStorageKind:(int)arg2 ;
+(id)filterText:(id)arg1 ;
+(id)filterMarkAttributes:(id)arg1 ;
-(unsigned long long)characterCount;
-(TSDInfoGeometry *)geometry;
-(NSRange)range;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)string;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)stringValue;
-(int)wpKind;
-(void)addObserver:(id)arg1 ;
-(NSString *)description;
-(BOOL)supportsSections;
-(unsigned long long)changeCount;
-(Class)layoutClass;
-(unsigned long long)wordCount;
-(id)documentRoot;
-(NSString *)debugDescription;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(id)childEnumerator;
-(unsigned long long)sectionCount;
-(NSRange)nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2 ;
-(id)stylesheet;
-(id)initWithContext:(id)arg1 string:(id)arg2 stylesheet:(id)arg3 kind:(int)arg4 ;
-(void)setParagraphStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)setDocumentRoot:(id)arg1 ;
-(void)enumerateSmartFieldsWithAttributeKind:(unsigned)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)languageForTextRange:(NSRange)arg1 useStringTokenizer:(BOOL)arg2 useCreationLanguage:(BOOL)arg3 ;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(BOOL)isThemeContent;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(id)childInfos;
-(void)insertStorage:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 ;
-(void)deleteRange:(NSRange)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 ;
-(NSRange)textRangeForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)newSubstorageWithRange:(NSRange)arg1 context:(id)arg2 flags:(unsigned)arg3 ;
-(unsigned long long)paragraphStartAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)paragraphIndexAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)paragraphIndexRangeForCharRange:(NSRange)arg1 ;
-(NSRange)textRangeForParagraphAtIndex:(unsigned long long)arg1 ;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)textIsVertical;
-(void)insertString:(id)arg1 atCharIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(unsigned long long)attachmentCount;
-(unsigned long long)previousCharacterIndex:(unsigned long long)arg1 ;
-(void)setParagraphStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)setCharacterStyle:(id)arg1 range:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)addSmartField:(id)arg1 toRange:(NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)setParagraphLevel:(unsigned long long)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)setListStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)setListStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(unsigned long long)paragraphCount;
-(NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(NSRange*)arg3 ;
-(id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(/*^block*/id)arg3 ;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/id)arg1 ;
-(void)continueSearch:(id)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)deletedRangesInRange:(NSRange)arg1 ;
-(unsigned long long)nextCharacterIndex:(unsigned long long)arg1 ;
-(NSRange)textRangeForParagraphsInCharRange:(NSRange)arg1 ;
-(NSRange)selectionRangeForCharIndex:(unsigned long long)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(unsigned long long)storageLength;
-(BOOL)adjustRangesByDelta:(long long)arg1 ;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1 ;
-(double)filteredCoreTextAttributesFontScaleEffectiveRange:(NSRange*)arg1 filterDelegate:(id)arg2 ;
-(CFDictionaryRef)createFilteredCoreTextAttributes:(CFDictionaryRef)arg1 effectiveRange:(NSRange*)arg2 filterDelegate:(id)arg3 ;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)smartFieldsWithAttributeKind:(unsigned)arg1 intersectingRange:(NSRange)arg2 ;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1 ;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1 ;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(CFLocaleRef)arg3 hyphenChar:(unsigned*)arg4 ;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1 ;
-(void)enumerateWithAttributeKind:(unsigned)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)hasSmartFieldsInRange:(NSRange)arg1 ;
-(id)searchInRange:(NSRange)arg1 forString:(id)arg2 options:(unsigned long long)arg3 onHit:(/*^block*/id)arg4 ;
-(void)findCommentsInRange:(NSRange)arg1 onHit:(/*^block*/id)arg2 ;
-(void)findChangesInRange:(NSRange)arg1 onHit:(/*^block*/id)arg2 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtParIndex:(unsigned long long)arg1 ;
-(void)p_didChangeRange:(NSRange)arg1 delta:(long long)arg2 broadcastKind:(int)arg3 ;
-(BOOL)canPasteAsPlainText;
-(id)stringEquivalentFromRange:(NSRange)arg1 withLayoutParent:(id)arg2 ;
-(NSRange)attachmentIndexRangeForTextRange:(NSRange)arg1 ;
-(id)attachmentAtAttachmentIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long*)arg2 ;
-(BOOL)hasDeletionInRange:(NSRange)arg1 ;
-(NSRange)footnoteRangeForTextRange:(NSRange)arg1 ;
-(id)footnoteAtFootnoteIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long*)arg2 ;
-(id)plainTextStringFromRange:(NSRange)arg1 convertTextualAttachments:(BOOL)arg2 includeChildTextStorages:(BOOL)arg3 forExport:(BOOL)arg4 withLayoutParent:(id)arg5 ;
-(id)nsAttributedSubstringFromRange:(NSRange)arg1 scale:(double)arg2 applyChanges:(BOOL)arg3 includeInlineDrawables:(BOOL)arg4 withLayoutParent:(id)arg5 ;
-(void)applyChanges:(BOOL)arg1 inRange:(NSRange)arg2 inSelectionRange:(NSRange)arg3 outChangedRange:(NSRange*)arg4 outSelectionRange:(NSRange*)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 forceAll:(BOOL)arg7 ;
-(id)pNSAttributedStringWithDefaultDelegateIgnoreLists:(BOOL)arg1 stripTextualAttachments:(BOOL)arg2 stripGraphicalAttachments:(BOOL)arg3 stripInlineAttachments:(BOOL)arg4 attachmentChar:(id)arg5 scale:(double)arg6 withLayoutParent:(id)arg7 ;
-(id)pNSAttributedStringWithAttributeDelegate:(id)arg1 ignoreLists:(BOOL)arg2 stripTextualAttachments:(BOOL)arg3 stripGraphicalAttachments:(BOOL)arg4 stripInlineAttachments:(BOOL)arg5 attachmentChar:(id)arg6 scale:(double)arg7 withLayoutParent:(id)arg8 ;
-(id)stringEquivalentFromRange:(NSRange)arg1 ;
-(id)nsAttributedSubstringFromRange:(NSRange)arg1 scale:(double)arg2 ;
-(id)nsAttributedSubstringFromRange:(NSRange)arg1 delegate:(id)arg2 scale:(double)arg3 applyChanges:(BOOL)arg4 includeInlineDrawables:(BOOL)arg5 withLayoutParent:(id)arg6 ;
-(id)nsAttributedSubstringWithAttachmentsRemovedFromRange:(NSRange)arg1 withLayoutParent:(id)arg2 ;
-(id)nsAttributedStringWithDefaultAttributeDelegateWithLayoutParent:(id)arg1 ;
-(id)nsAttributedStringWithAttributeDelegate:(id)arg1 withLayoutParent:(id)arg2 ;
-(id)nsAttributedStringWithLayoutParent:(id)arg1 ;
-(id)nsAttributedStringWithAttributeDelegate:(id)arg1 ignoreLists:(BOOL)arg2 withLayoutParent:(id)arg3 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorAtCharIndex:(unsigned long long)arg1 styleProvider:(id)arg2 ;
-(TSWPAttributeArray*)attributeArrayForKind:(unsigned)arg1 ;
-(BOOL)isInInit;
-(void)setListStart:(unsigned long long)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(id)listStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)listStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1 ;
-(void)setParagraphLevel:(unsigned long long)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(int)writingDirectionForParagraphAtParIndex:(unsigned long long)arg1 ;
-(void)setParagraphWritingDirection:(int)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(NSRange)arg1 styleProvider:(id)arg2 ;
-(BOOL)allowsElementKind:(int)arg1 ;
-(unsigned long long)autoNumberFootnoteCountForRange:(NSRange)arg1 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 paragraphDirection:(int)arg9 ;
-(unsigned long long)findCharIndexForFootnoteAttachment:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(unsigned long long)listStartAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForListAtParIndex:(unsigned long long)arg1 ;
-(id)languageAtParIndex:(unsigned long long)arg1 useStringTokenizer:(BOOL)arg2 useCreationLanguage:(BOOL)arg3 ;
-(int)writingDirectionForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)paragraphHasListLabelAtCharIndex:(unsigned long long)arg1 ;
-(id)extendSelectionToIncludeSmartFields:(id)arg1 ;
-(unsigned long long)selectedParagraphBreakCount:(NSRange)arg1 ;
-(unsigned long long)emptyParagraphCount:(NSRange)arg1 ;
-(unsigned long long)selectionRangeMinForCharIndex:(unsigned long long)arg1 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(BOOL)arg2 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 ;
-(BOOL)isAllWhitespaceInRange:(NSRange)arg1 ;
-(id)substringWithSelection:(id)arg1 ;
-(NSRange)rangeForSelectionWithInsertionSelection:(id)arg1 ;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 left:(BOOL)arg2 effectiveRange:(NSRange*)arg3 ;
-(BOOL)highlightsAllowed;
-(id)firstHighlightForSelectionRange:(NSRange)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(long long)contentWritingDirection;
-(BOOL)hasTrackedChanges;
-(BOOL)anchoredDrawableAttachmentCharacterAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectionRangeMaxForCharIndex:(unsigned long long)arg1 ;
-(id)dictationAndAutocorrectionKeyAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)addAllDictationAndAutocorrectionKeyRangesInRange:(NSRange)arg1 toRanges:(TSWPRangeVector*)arg2 ;
-(TSWPAttributeArray*)attributeArrayForKind:(unsigned)arg1 withCreate:(BOOL)arg2 fromUndo:(BOOL)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(TSWPAttributeArray*)attributeArrayForKind:(unsigned)arg1 withCreate:(BOOL)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)compressAttributeArrayKind:(unsigned)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(NSRange)replaceCharactersInSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned)arg3 replaceTextData:(SCD_Struct_TS135*)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransactionRef)arg6 outInsertedRange:(NSRange*)arg7 ;
-(void)lowLevelApplyObject:(id)arg1 toCharRange:(NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransactionRef)arg5 ;
-(void)applyObject:(id)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(unsigned)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphIndexRange:(NSRange)arg3 forKind:(unsigned)arg4 undoTransaction:(TSWPStorageTransactionRef)arg5 ;
-(BOOL)supportsSectionCopying;
-(void)applyObject:(id)arg1 toCharRange:(NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransactionRef)arg5 ;
-(int)compareAttributeArray1:(TSWPAttributeArray*)arg1 array2:(TSWPAttributeArray*)arg2 range1:(NSRange)arg3 range2:(NSRange)arg4 attributeIndex1:(unsigned long long)arg5 attributeIndex2:(unsigned long long)arg6 ;
-(id)footnoteReferenceAttachmentOrFootnoteMarkAttachmentAtCharIndex:(unsigned long long)arg1 ;
-(id)pOverrideObjectBeforeReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 withInsertionBehavior:(int)arg3 ;
-(id)pFindValidInsertionCharStyleFromCharIndex:(unsigned long long)arg1 ;
-(void)pApplyOverrideObjectAfterReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(TSWPParagraphAttributeArray*)paragraphAttributeArrayForKind:(unsigned)arg1 withCreate:(BOOL)arg2 ;
-(void)compress:(TSWPStorageTransactionRef)arg1 ;
-(void)p_attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(NSRange)insertSpecialCharacter:(unsigned short)arg1 object:(id)arg2 kind:(unsigned)arg3 range:(NSRange)arg4 dolcContext:(id)arg5 undoTransaction:(TSWPStorageTransactionRef)arg6 changeSession:(id)arg7 ;
-(void)insertObject:(id)arg1 charIndex:(unsigned long long)arg2 attributeArray:(TSWPAttributeArray*)arg3 attributeIndex:(unsigned long long)arg4 dolcContext:(id)arg5 undoTransaction:(TSWPStorageTransactionRef)arg6 ;
-(void)insertParagraphData:(SCD_Struct_TS136)arg1 charIndex:(unsigned long long)arg2 attributeArray:(TSWPAttributeArray*)arg3 attributeIndex:(unsigned long long)arg4 undoTransaction:(TSWPStorageTransactionRef)arg5 ;
-(void)applyDataValue:(unsigned)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(unsigned)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)applyWritingDirection:(int)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(unsigned)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)applyObject:(id)arg1 toParagraphsInCharRange:(NSRange)arg2 forKind:(unsigned)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphsInCharRange:(NSRange)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(NSRange)replaceAllOccurrencesOfObject:(id)arg1 withObject:(id)arg2 forKind:(unsigned)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)transferAttributeArraySource:(TSWPAttributeArray*)arg1 forSourceRange:(NSRange)arg2 toDestStorage:(id)arg3 objectContext:(id)arg4 dolcContext:(id)arg5 flags:(int)arg6 ;
-(int)compareAttributeArray:(TSWPAttributeArray*)arg1 range:(NSRange)arg2 otherStorage:(id)arg3 otherRange:(NSRange)arg4 ;
-(id)pOverrideObjectBeforeReplacingCharactersInSelection:(id)arg1 withString:(id)arg2 ;
-(void)pApplyOverrideObjectAfterReplacingCharactersInSelection:(id)arg1 withString:(id)arg2 overrideObject:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(BOOL)supportsColumnStyles;
-(id)columnStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)pExportAttributes:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 stickyFont:(id*)arg3 scale:(double)arg4 ;
-(long long)pMapListsFromStorageRange:(NSRange)arg1 toString:(id)arg2 atStringLoc:(unsigned long long)arg3 textListMap:(id)arg4 ;
-(id)pExportParagraphAttributes:(id)arg1 nextParagraphStyle:(id)arg2 scale:(double)arg3 ;
-(id)valueForProperty:(int)arg1 atCharIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)pParagraphStyleWithFrequentAttributesInString:(id)arg1 withinStringRange:(NSRange)arg2 currentParagraphStyle:(id)arg3 ;
-(id)pImportParagraphAttributes:(id)arg1 paragraphStyle:(id)arg2 ;
-(id)pTextListsFromListStyle:(id)arg1 atLevel:(unsigned long long)arg2 labelTypeMap:(id)arg3 ;
-(void)pMapAttributesFromAttributedString:(id)arg1 ontoRange:(NSRange)arg2 asCharacterStylesOnly:(BOOL)arg3 ;
-(id)pDrawableInfoFromImporter:(id)arg1 error:(id*)arg2 ;
-(id)hiddenRangesInRange:(NSRange)arg1 ;
-(TSWPChangeAttributeArray*)insertionChangesTable;
-(void)p_handleChangeSplittingForInsertedRange:(NSRange)arg1 changeSession:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(NSRange)replaceCharactersInSelection:(id)arg1 withStorage:(id)arg2 usePasteRules:(BOOL)arg3 dolcContext:(id)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 ;
-(id)relocateNonSelectedAnchorsInSelection:(id)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(BOOL)supportsListStyles;
-(unsigned long long)listStyleCount;
-(unsigned long long)columnStyleCount;
-(void)transferAttributeArraySource:(TSWPAttributeArray*)arg1 toAttributeArrayDest:(TSWPAttributeArray*)arg2 atCharIndex:(unsigned long long)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withStorage:(id)arg2 usePasteRules:(BOOL)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)footnoteMarkAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)isDOLCSuppressed;
-(NSRange)textRangeIgnoringTrailingLineBreaksForParagraphAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSmartFields;
-(id)textSourceForLayoutInRange:(NSRange)arg1 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorAtParIndex:(unsigned long long)arg1 styleProvider:(id)arg2 ;
-(unsigned long long)attachmentIndexForInsertionAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)hasSectionForParagraphBreakAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(BOOL)arg2 ;
-(unsigned long long)findCharIndexForAttachment:(id)arg1 ;
-(BOOL)changesWithPageCount;
-(void)p_fillMarkers:(vector<std::__1::pair<unsigned long, unsigned short>, std::__1::allocator<std::__1::pair<unsigned long, unsigned short> > >*)arg1 string:(id)arg2 length:(unsigned long long)arg3 hasAttachments:(BOOL*)arg4 hasFootnotes:(BOOL*)arg5 hasBreaks:(BOOL*)arg6 ;
-(void)p_lowLevelReplaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 length:(unsigned long long)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(id)pDefaultSectionForContext:(id)arg1 ;
-(void)p_replaceCharactersInSelection:(id)arg1 withString:(id)arg2 length:(unsigned long long)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)p_fillMarkers:(vector<unsigned long, std::__1::allocator<unsigned long> >*)arg1 startingAtCharIndex:(unsigned long long)arg2 forCount:(unsigned long long)arg3 ;
-(void)removeSmartField:(id)arg1 fromRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)setDictationAndAutocorrection:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(TSWPChangeAttributeArray*)deletionChangesTable;
-(id)sectionAtSectionIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)setParagraphFlags:(unsigned short)arg1 level:(unsigned long long)arg2 forCharRange:(NSRange)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(void)setColumnStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(id)sectionAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(unsigned long long)paragraphLevelAtCharIndex:(unsigned long long)arg1 ;
-(unsigned short)paragraphFlagsAtCharIndex:(unsigned long long)arg1 ;
-(void)filterInvalidContentForStorage:(id)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(unsigned)disallowedElementKinds;
-(void)filterSectionBreaksFromStorage:(id)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 notifyObservers:(BOOL)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(unsigned long long)footnoteCount;
-(TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(NSRange)arg1 styleProvider:(id)arg2 requireHidden:(BOOL)arg3 ;
-(unsigned long long)previousCharacterIndex:(unsigned long long)arg1 forDelete:(BOOL)arg2 ;
-(NSRange)p_rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 handleNextWordWhitespace:(BOOL)arg3 ;
-(NSRange)rangeByExtendingRangeToWhitespace:(NSRange)arg1 skipVisibleDeleted:(BOOL)arg2 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)p_RelocateNonSelectedAnchorsInRange:(NSRange)arg1 selectionInfos:(id)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(BOOL)setDOLCSuppressed:(BOOL)arg1 ;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 changeSession:(id)arg5 ;
-(NSRange)p_replaceCharactersInLogicalSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned)arg3 replaceTextData:(SCD_Struct_TS135*)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransactionRef)arg6 outInsertedRange:(NSRange*)arg7 ;
-(id)p_replacementsForSelection:(id)arg1 withString:(id)arg2 changeSession:(id)arg3 shouldTrackDeletions:(BOOL)arg4 ;
-(void)setLanguage:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(id)childEnumeratorForRange:(NSRange)arg1 ;
-(void)p_findChangesInRange:(NSRange)arg1 onHit:(/*^block*/id)arg2 withAttributeKind:(unsigned)arg3 ;
-(NSRange)textRangeForListAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)listEndAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)paragraphEndAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstParIndexInListAtParIndex:(unsigned long long)arg1 ;
-(id)bestCharacterLanguageForTextRange:(NSRange)arg1 ;
-(unsigned long long)listNumberForParagraphEnumerator:(const TSWPParagraphEnumerator*)arg1 numberingData:(SCD_Struct_TS137*)arg2 ;
-(id)columnStyleAtColumnStyleIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)styleDidChangeInRange:(NSRange)arg1 ;
-(void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(unsigned long long)footnoteIndexForFootnote:(id)arg1 ;
-(void)enumerateAttachmentsOfClass:(Class)arg1 inTextRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateAttachmentsInTextRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(BOOL)arg2 attributeKind:(unsigned)arg3 ;
-(NSRange)p_extendRangeToIncludeSmartFields:(NSRange)arg1 ;
-(id)smartFieldsWithAttributeKind:(unsigned)arg1 intersectingRange:(NSRange)arg2 passingTest:(/*^block*/id)arg3 ;
-(CTFontRef)createFontAtCharIndex:(unsigned long long)arg1 scaleTextPercent:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 styleProvider:(id)arg4 ;
-(id)newSubstorageWithRange:(NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned)arg4 kind:(int)arg5 ;
-(id)referencedStylesOfClass:(Class)arg1 ;
-(BOOL)p_hasGoodAttributesForPlainTextPaste;
-(id)newSubstorageWithRange:(NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned)arg4 ;
-(void)paragraphFlags:(unsigned short*)arg1 andLevel:(unsigned long long*)arg2 atCharIndex:(unsigned long long)arg3 ;
-(void)setWPKind:(int)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(void)addDisallowedElementKind:(int)arg1 ;
-(void)removeDisallowedElementKind:(int)arg1 ;
-(unsigned long long)indexForCharacter:(unsigned short)arg1 startCharIndex:(unsigned long long)arg2 ;
-(BOOL)isWholeParagraphsForRange:(NSRange)arg1 ignoreAttachmentCharacters:(BOOL)arg2 requireParagraphBreakSelected:(BOOL)arg3 ;
-(BOOL)isEmptyParagraphSelection:(id)arg1 outRange:(NSRange*)arg2 ;
-(NSRange)rangeByExtendingRangeToWhitespace:(NSRange)arg1 ;
-(NSRange)rangeByExtendingRangeToLineBreak:(NSRange)arg1 ;
-(NSRange)scanLeftForWordAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(NSRange)rangeByExpandingToIncludePartialWords:(NSRange)arg1 ;
-(NSRange)rangeByTrimmingRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)objectAtLocationAtExactCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned)arg2 ;
-(id)extendSelectionForTopicChildren:(id)arg1 ;
-(NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(NSRange)rangeOfParagraphBreakingCharacter:(unsigned short)arg1 backwards:(BOOL)arg2 range:(NSRange)arg3 ;
-(NSRange)rangeOfAnnotationWithOptions:(unsigned long long)arg1 range:(NSRange)arg2 ;
-(NSRange)rangeForHighlight:(id)arg1 ;
-(BOOL)canUserReplaceText;
-(NSRange)replaceAllOccurrencesOfStyle:(id)arg1 withStyle:(id)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(BOOL)styleOverridesAppliedToRange:(NSRange)arg1 ;
-(NSRange)textRangeForListsInCharRange:(NSRange)arg1 ;
-(NSRange)textRangeForParagraphsInRange:(NSRange)arg1 ;
-(unsigned long long)findNextParagraphStyleChange:(unsigned long long)arg1 maxCharIndex:(unsigned long long)arg2 ;
-(void)enumerateParagraphsIntersectingTextRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)listNumberForParagraphIndex:(unsigned long long)arg1 numberingData:(SCD_Struct_TS137*)arg2 ;
-(void)setParagraphFlags:(unsigned short)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(unsigned long long)characterStyleAttributeCount;
-(void)invalidateForStyle:(id)arg1 ;
-(void)replaceSectionAtSectionIndex:(unsigned long long)arg1 withSection:(id)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(unsigned long long)sectionIndexForCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndexForSection:(id)arg1 ;
-(NSRange)insertSection:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 changeSession:(id)arg5 ;
-(void)appendSection:(id)arg1 charIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(unsigned long long)footnoteIndexForCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)footnoteIndexForFootnoteStorage:(id)arg1 ;
-(id)footnoteStorages;
-(void)invalidateFootnoteAttachmentCharIndexes;
-(void)invalidatePageCountAttachmentCharIndexes:(BOOL)arg1 ;
-(void)invalidateCharIndexForAttachment:(id)arg1 ;
-(unsigned long long)findCharacterIndexForContainedInfo:(id)arg1 ;
-(unsigned long long)attachmentIndexAtCharIndex:(unsigned long long)arg1 ;
-(void)replaceWithAttachment:(id)arg1 forAttachmentIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransactionRef)arg4 ;
-(id)editableSmartFieldAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)smartFieldDidChange:(id)arg1 ;
-(void)autoUpdateField:(id)arg1 withRange:(NSRange)arg2 documentRoot:(id)arg3 returningInsertedRange:(NSRange*)arg4 ;
-(void)autoUpdateSmartFieldsWithDocumentRoot:(id)arg1 ;
-(void)addGlyphVariantData:(id)arg1 toRange:(NSRange)arg2 ;
-(void)removeGlyphVariantDataFromRange:(NSRange)arg1 ;
-(id)glyphVariantDataAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)fixGlyphVariantFontsForRange:(NSRange)arg1 ;
-(id)fontNameAtCharIndex:(unsigned long long)arg1 size:(double*)arg2 effectiveRange:(NSRange*)arg3 styleProvider:(id)arg4 ;
-(id)childCommandForApplyThemeCommand:(id)arg1 ;
-(BOOL)hasVisibleText;
-(BOOL)canPasteAsPlainTextWithUniformParagraphs;
-(id)newSubstorageWithRange:(NSRange)arg1 context:(id)arg2 flags:(unsigned)arg3 kind:(int)arg4 ;
-(int)compareRange:(NSRange)arg1 otherStorage:(id)arg2 otherRange:(NSRange)arg3 options:(unsigned long long)arg4 ;
-(BOOL)ignoreContentsChangedNotifications;
-(void)setIgnoreContentsChangedNotifications:(BOOL)arg1 ;
-(void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 attributeKind:(unsigned)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransactionRef)arg5 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 options:(unsigned long long)arg3 changedRange:(NSRange*)arg4 changeDelta:(long long*)arg5 undoTransaction:(TSWPStorageTransactionRef)arg6 changeSession:(id)arg7 ;
-(id)valueForBIUProperties:(id)arg1 selection:(id)arg2 insertionStyle:(id)arg3 ;
-(BOOL)p_passesExtraTablesChecksForStoringInAStringValueCell;
-(BOOL)canBeStoredInAStringValueCell;
-(id)valueForBIUProperties:(id)arg1 ;
-(id)editableAnnotationForInsertionPointSelection:(id)arg1 includeComments:(BOOL)arg2 withOutRange:(NSRange*)arg3 selectionIsOnEdge:(BOOL*)arg4 ;
-(TSWPRangeVector*)deletedRangeVectorInRange:(NSRange)arg1 ;
-(id)changeAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(BOOL)p_hasDeletedTextAtCharIndex:(unsigned long long)arg1 requireHidden:(BOOL)arg2 range:(NSRange*)arg3 ;
-(BOOL)hasHiddenTextAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_indexOfFirstNonDeletedCharInRange:(NSRange)arg1 requireVisible:(BOOL)arg2 ;
-(NSRange)rangeForChange:(id)arg1 ;
-(void)applyChange:(id)arg1 changeRange:(NSRange)arg2 accept:(BOOL)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)changeAtCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(id)changeDetailsForChange:(id)arg1 withRange:(NSRange)arg2 ;
-(NSRange)rangeForTrackedChanges:(id)arg1 ;
-(id)firstHighlightForSelectionRange:(NSRange)arg1 outRange:(NSRange*)arg2 requireComment:(BOOL)arg3 ;
-(BOOL)p_shouldInsertionSplitChange:(id)arg1 changeSession:(id)arg2 ;
-(id)visibleRangesInRange:(NSRange)arg1 ;
-(BOOL)hasHiddenTextAtCharIndex:(unsigned long long)arg1 range:(NSRange*)arg2 ;
-(BOOL)hasDeletedTextAtCharIndex:(unsigned long long)arg1 range:(NSRange*)arg2 ;
-(BOOL)hasVisibleTextAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFirstVisibleCharInRange:(NSRange)arg1 ;
-(unsigned long long)indexOfFirstNonDeletedCharInRange:(NSRange)arg1 ;
-(unsigned long long)indexAfterLastVisibleCharInRange:(NSRange)arg1 ;
-(id)nextChangeFromCharIndex:(unsigned long long)arg1 afterChange:(id)arg2 changeRange:(NSRange*)arg3 ;
-(id)previousChangeFromCharIndex:(unsigned long long)arg1 beforeChange:(id)arg2 changeRange:(NSRange*)arg3 ;
-(id)changeDetailsAtCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)selectionContainsVisibleTrackedChanges:(id)arg1 ;
-(void)changeViewSettingsDidChange;
-(SCD_Struct_TS134)hyperlinkCellID;
-(BOOL)hasAttachmentsThatChangeWithPageNumberOrPageCount;
-(void)stashBroadcaster;
-(void)unstashBroadcaster;
-(void)setHyperlinkCellID:(SCD_Struct_TS134)arg1 ;
@end
