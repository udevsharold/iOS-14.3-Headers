/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASDPropertyAddress : NSObject <NSCopying> {

	AudioObjectPropertyAddress _audioObjectPropertyAddress;

}

@property (nonatomic,readonly) unsigned selector; 
@property (nonatomic,readonly) unsigned scope; 
@property (nonatomic,readonly) unsigned element; 
@property (nonatomic,readonly) AudioObjectPropertyAddress audioObjectPropertyAddress;              //@synthesize audioObjectPropertyAddress=_audioObjectPropertyAddress - In the implementation block
-(unsigned)scope;
-(id)initWithAddress:(AudioObjectPropertyAddress)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(unsigned)selector;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)element;
-(AudioObjectPropertyAddress)audioObjectPropertyAddress;
-(id)initWithSelector:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
@end
