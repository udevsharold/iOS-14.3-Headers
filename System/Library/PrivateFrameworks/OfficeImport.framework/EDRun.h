/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, NSArray, NSString;

@interface EDRun : NSObject <EDKeyedObject> {

	EDResources* mResources;
	unsigned long long mCharIndex;
	unsigned long long mFontIndex;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
+(id)runWithResources:(id)arg1 ;
+(id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(long long)key;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithResources:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)charIndex;
-(id)effects;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)overrideFont:(id)arg1 ;
-(void)adjustIndex:(unsigned long long)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqualToRun:(id)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4 ;
@end
