/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPropertyDescription, NSString, NSFetchIndexDescription;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	NSPropertyDescription* _property;
	NSString* _propertyName;
	unsigned long long _collationType;
	NSFetchIndexDescription* _indexDescription;
	struct {
		unsigned _ascending : 1;
		unsigned _propertyIsRetained : 1;
		unsigned _unique : 1;
		unsigned _reservedEntityDescription : 29;
	}  _indexElementDescriptionFlags;

}

@property (retain,readonly) NSPropertyDescription * property; 
@property (retain,readonly) NSString * propertyName;                                    //@synthesize propertyName=_propertyName - In the implementation block
@property (assign) unsigned long long collationType; 
@property (getter=isAscending) BOOL ascending; 
@property (nonatomic,readonly) NSFetchIndexDescription * indexDescription; 
+(BOOL)supportsSecureCoding;
-(NSPropertyDescription *)property;
-(void)setAscending:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)collationType;
-(void)dealloc;
-(NSFetchIndexDescription *)indexDescription;
-(NSString *)propertyName;
-(id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isAscending;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCollationType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
