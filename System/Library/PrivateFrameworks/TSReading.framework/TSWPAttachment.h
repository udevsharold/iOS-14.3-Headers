/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSDOwningAttachment.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage, NSString;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying> {

	TSWPStorage* _parentStorage;

}

@property (assign,nonatomic) TSWPStorage * parentStorage;                       //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,readonly) BOOL isDrawable; 
@property (nonatomic,readonly) BOOL isAnchored; 
@property (nonatomic,readonly) BOOL isPartitioned; 
@property (nonatomic,readonly) BOOL isAttachedToBodyText; 
@property (nonatomic,readonly) Class positionerClass; 
@property (nonatomic,readonly) BOOL isSearchable; 
@property (nonatomic,readonly) BOOL specifiesEnabledKnobMask; 
@property (nonatomic,readonly) unsigned long long enabledKnobMask; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned)attributeArrayKind;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isAnchored;
-(BOOL)isSearchable;
-(BOOL)isEqual:(id)arg1 ;
-(int)elementKind;
-(id)copyWithContext:(id)arg1 ;
-(BOOL)isDrawable;
-(BOOL)isAttachedToBodyText;
-(unsigned long long)findCharIndex;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(unsigned long long)enabledKnobMask;
-(BOOL)specifiesEnabledKnobMask;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(BOOL)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;
-(BOOL)changesWithPageCount;
-(id)topLevelAttachment;
-(BOOL)changesWithPageNumber;
@end

