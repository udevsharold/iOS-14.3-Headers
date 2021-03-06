/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration> {

	NSArray* _adjustments;
	NSOrderedSet* _maskUUIDs;
	unsigned long long _formatVersion;

}
+(BOOL)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF40*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)debugDescription;
-(id)initWithEnvelopeDictionary:(id)arg1 ;
-(id)envelopeDictionary;
-(id)initWithAdjustments:(id)arg1 ;
-(id)adjustmentAtIndex:(unsigned long long)arg1 ;
-(id)firstAdjustmentWithIdentifier:(id)arg1 ;
-(id)adjustmentsWithIdentifier:(id)arg1 ;
-(id)maskUUIDs;
@end

