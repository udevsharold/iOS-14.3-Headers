/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface DIAttributeDocument : DIAttribute <NSSecureCoding> {

	NSArray* currentValue;
	NSString* _idDocType;
	unsigned long long _docType;
	NSArray* _acceptableDocs;
	unsigned long long _acceptableDocTypes;

}

@property (assign,nonatomic) unsigned long long acceptableDocTypes;                    //@synthesize acceptableDocTypes=_acceptableDocTypes - In the implementation block
@property (nonatomic,copy) NSArray * acceptableDocs;                                   //@synthesize acceptableDocs=_acceptableDocs - In the implementation block
@property (nonatomic,retain) NSString * idDocType;                                     //@synthesize idDocType=_idDocType - In the implementation block
@property (assign,nonatomic) unsigned long long docType;                               //@synthesize docType=_docType - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSArray * currentValue; 
+(BOOL)supportsSecureCoding;
-(void)setCurrentValue:(NSArray *)arg1 ;
-(id)defaultValue;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)docType;
-(void)setDocType:(unsigned long long)arg1 ;
-(unsigned long long)acceptableDocTypes;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)acceptableDocs;
-(id)getCurrentValue;
-(id)initWithAcceptableDocs:(id)arg1 ;
-(NSString *)idDocType;
-(void)setIdDocType:(NSString *)arg1 ;
-(void)setAcceptableDocs:(NSArray *)arg1 ;
-(void)setAcceptableDocTypes:(unsigned long long)arg1 ;
@end
