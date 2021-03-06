/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSKnownKeysMappingStrategy : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) id* keys; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
+(BOOL)supportsSecureCoding;
-(id)initForKeys:(id)arg1 ;
-(id*)keys;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

