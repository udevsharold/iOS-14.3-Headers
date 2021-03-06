/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSText/TSPCopying.h>
#import <TSText/TSKDocumentObject.h>
#import <TSText/TSWPTextSpanningObject.h>
#import <TSText/TSWPOverlappingField.h>
#import <TSText/TSKPencilAnnotation.h>

@protocol TSKPencilAnnotationStorage;
@class NSString, TSWPStorage, TSKPKDrawing;

@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation> {

	TSWPStorage* _parentStorage;
	NSString* _textAttributeUUIDString;
	id<TSKPencilAnnotationStorage> _pencilAnnotationStorage;

}

@property (nonatomic,retain) id<TSKPencilAnnotationStorage> pencilAnnotationStorage;              //@synthesize pencilAnnotationStorage=_pencilAnnotationStorage - In the implementation block
@property (assign,nonatomic,__weak) TSWPStorage * parentStorage;                                  //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,readonly) NSString * textAttributeUUIDString;                                //@synthesize textAttributeUUIDString=_textAttributeUUIDString - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) TSKPKDrawing * drawing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(NSString *)uuid;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)loadFromArchive:(const PencilAnnotationArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id<TSKPencilAnnotationStorage>)pencilAnnotationStorage;
-(BOOL)isInDocument;
-(id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2 ;
-(void)setPencilAnnotationStorage:(id<TSKPencilAnnotationStorage>)arg1 ;
-(BOOL)isEquivalentToObject:(id)arg1 ;
-(void)resetTextAttributeUUIDString;
-(NSString *)textAttributeUUIDString;
-(void)i_setTextAttributeUUIDString:(id)arg1 ;
@end

