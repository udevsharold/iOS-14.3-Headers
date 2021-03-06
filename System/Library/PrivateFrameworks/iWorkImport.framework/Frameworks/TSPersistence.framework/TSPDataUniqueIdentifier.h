/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSPDigest, NSString;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying> {

	TSPDigest* _digest;

}

@property (nonatomic,readonly) TSPDigest * digest;                   //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSString * digestString; 
-(TSPDigest *)digest;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDigest:(id)arg1 ;
-(NSString *)digestString;
@end

