/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying> {

	NSString* _digestString;
	NSString* _locator;

}

@property (copy,readonly) NSString * digestString; 
@property (copy,readonly) NSString * locator; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)locator;
-(NSString *)digestString;
-(id)initWithDigestString:(id)arg1 locator:(id)arg2 ;
-(BOOL)isEqualToDocumentResourceLegacyInfo:(id)arg1 ;
@end

