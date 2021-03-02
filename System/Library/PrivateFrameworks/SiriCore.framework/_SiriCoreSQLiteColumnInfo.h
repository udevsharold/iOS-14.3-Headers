/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCoreSQLiteColumn.h>

@protocol SiriCoreSQLiteValue;
@class NSString;

@interface _SiriCoreSQLiteColumnInfo : NSObject <SiriCoreSQLiteColumn> {

	BOOL _isPrimaryKey;
	BOOL _isNotNull;
	long long _identifier;
	NSString* _name;
	NSString* _type;
	id<SiriCoreSQLiteValue> _defaultValue;

}

@property (nonatomic,readonly) long long identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryKey;                                      //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (nonatomic,readonly) BOOL isNotNull;                                         //@synthesize isNotNull=_isNotNull - In the implementation block
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNotNull;
-(id<SiriCoreSQLiteValue>)defaultValue;
-(long long)identifier;
-(NSString *)type;
-(NSString *)name;
-(BOOL)isPrimaryKey;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(id)arg3 isPrimaryKey:(BOOL)arg4 isNotNull:(BOOL)arg5 defaultValue:(id)arg6 ;
@end
