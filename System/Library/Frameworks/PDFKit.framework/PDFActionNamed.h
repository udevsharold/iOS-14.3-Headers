/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying> {

	PDFActionNamedPrivateVars* _private2;

}

@property (assign,nonatomic) long long name; 
-(void)commonInit;
-(void)setName:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)name;
-(id)toolTip;
-(id)initWithName:(long long)arg1 ;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
@end
