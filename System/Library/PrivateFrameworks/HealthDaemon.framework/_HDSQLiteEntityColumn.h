/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HDSQLiteEntityForeignKey;

@interface _HDSQLiteEntityColumn : NSObject {

	unsigned char _keyPathType;
	NSString* _name;
	NSString* _columnType;
	HDSQLiteEntityForeignKey* _foreignKey;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * columnType;                         //@synthesize columnType=_columnType - In the implementation block
@property (nonatomic,readonly) unsigned char keyPathType;                          //@synthesize keyPathType=_keyPathType - In the implementation block
@property (nonatomic,readonly) HDSQLiteEntityForeignKey * foreignKey;              //@synthesize foreignKey=_foreignKey - In the implementation block
-(HDSQLiteEntityForeignKey *)foreignKey;
-(id)description;
-(NSString *)name;
-(NSString *)columnType;
-(id)creationSQL;
-(id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 foreignKey:(id)arg4 ;
-(id)_columnNameAndTypeString;
-(id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 ;
-(id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(long long)arg6 ;
-(unsigned char)keyPathType;
@end

