/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@interface STTemperature : STSiriModelObject {

	double _value;
	long long _units;

}
+(BOOL)supportsSecureCoding;
-(long long)units;
-(double)value;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithValue:(double)arg1 units:(long long)arg2 ;
@end

