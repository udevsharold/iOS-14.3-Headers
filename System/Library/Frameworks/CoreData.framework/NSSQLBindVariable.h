/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {

	int _cd_rc;
	unsigned char _sqlType;
	unsigned _index;
	unsigned _flags;
	id _value;
	NSPropertyDescription* _propertyDescription;
	long long _int64;

}
-(long long)int64;
-(id)value;
-(void)setIndex:(unsigned)arg1 ;
-(BOOL)allowsCoercion;
-(BOOL)_isDeallocating;
-(BOOL)hasObjectValue;
-(unsigned)index;
-(void)dealloc;
-(BOOL)_tryRetain;
-(id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2 ;
-(id)initWithUnsignedInt:(unsigned)arg1 sqlType:(unsigned char)arg2 ;
-(void)setValue:(id)arg1 ;
-(void)setUnsignedInt:(unsigned)arg1 ;
-(unsigned long long)retainCount;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 ;
-(id)retain;
-(void)setSQLType:(unsigned char)arg1 ;
-(unsigned char)sqlType;
-(oneway void)release;
-(id)propertyDescription;
-(void)setInt64:(long long)arg1 ;
-(unsigned)unsignedInt;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 allowCoercion:(BOOL)arg4 ;
@end
