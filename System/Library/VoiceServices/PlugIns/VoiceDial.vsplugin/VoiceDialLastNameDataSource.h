/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceDial/VoiceDialNameDataSource.h>

@interface VoiceDialLastNameDataSource : VoiceDialNameDataSource
-(unsigned long long)indexOfMainNameOfType:(int)arg1 ;
-(unsigned long long)personNameCount;
-(BOOL)getName:(id*)arg1 phoneticName:(id*)arg2 atIndex:(unsigned long long)arg3 forPerson:(void*)arg4 ;
-(int)typeOfNameAtIndex:(unsigned long long)arg1 ;
@end
