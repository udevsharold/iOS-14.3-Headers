/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFAnnotationChangePrivate, PDFAnnotation;

@interface PDFAnnotationChange : NSObject {

	PDFAnnotationChangePrivate* _private;

}

@property (nonatomic,readonly) int changeType; 
@property (nonatomic,retain,readonly) PDFAnnotation * annotation; 
@property (nonatomic,readonly) unsigned long long changeTimestamp; 
-(PDFAnnotation *)annotation;
-(int)changeType;
-(id)description;
-(unsigned long long)changeTimestamp;
-(id)initWithAddedAnnotation:(id)arg1 ;
-(id)initWithChangedAnnotation:(id)arg1 ;
-(id)initWithRemovedAnnotation:(id)arg1 ;
-(id)initWithReorderedAnnotation:(id)arg1 ;
-(id)initWithReorderedAndChangedAnnotation:(id)arg1 ;
@end

