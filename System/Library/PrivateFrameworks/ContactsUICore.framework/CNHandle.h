/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNHandle.h>
@class NSString;


@protocol CNHandle <NSObject>
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSString * customIdentifier; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(NSString *)customIdentifier;
-(NSString *)stringValue;
-(unsigned long long)type;

@end


@class NSString;

@interface CNHandle : NSObject <CNHandle> {

	NSString* _stringValue;
	unsigned long long _type;
	NSString* _customIdentifier;

}

@property (nonatomic,copy,readonly) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * customIdentifier;              //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tuHandleForHandle:(id)arg1 ;
+(unsigned long long)handleTypeForPropertyKey:(id)arg1 ;
+(id)inPersonHandleForHandle:(id)arg1 ;
+(id)keyTypeMapping;
+(long long)tuHandleTypeFromType:(unsigned long long)arg1 ;
+(id)tuHandleTypeMap;
+(long long)inPersonHandleTypeForType:(unsigned long long)arg1 ;
+(id)inPersonHandleTypeMap;
+(long long)geminiHandleTypeForType:(unsigned long long)arg1 ;
+(id)geminiHandleTypeMap;
+(id)geminiHandleForHandle:(id)arg1 ;
-(NSString *)customIdentifier;
-(id)initWithStringValue:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)stringValue;
-(unsigned long long)type;
-(id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(unsigned long long)arg3 ;
@end

