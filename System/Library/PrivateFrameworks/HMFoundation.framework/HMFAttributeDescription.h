/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol NSObject;
@class NSString, NSFormatter, NSArray;

@interface HMFAttributeDescription : NSObject <HMFObject> {

	NSString* _name;
	id<NSObject> _value;
	unsigned long long _options;
	NSFormatter* _formatter;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id<NSObject> value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSFormatter * formatter;                      //@synthesize formatter=_formatter - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(id<NSObject>)value;
-(NSFormatter *)formatter;
-(id)init;
-(NSString *)privateDescription;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4 ;
-(NSString *)description;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(NSString *)debugDescription;
-(NSString *)shortDescription;
-(unsigned long long)options;
@end
