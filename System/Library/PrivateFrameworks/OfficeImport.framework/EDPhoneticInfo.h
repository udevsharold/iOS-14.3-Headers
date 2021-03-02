/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, NSString, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	unsigned long long mFontIndex;
	NSString* mString;
	int mType;
	int mAlign;
	EDCollection* mRuns;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneticInfoWithResources:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)string;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)runs;
-(int)align;
-(void)setType:(int)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)prependString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithResources:(id)arg1 ;
-(NSString *)description;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)setAlign:(int)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(BOOL)isEqualToEDPhoneticInfo:(id)arg1 ;
@end
